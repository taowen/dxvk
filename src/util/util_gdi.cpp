#include "util_gdi.h"
#include "log/log.h"

namespace dxvk {

#ifdef _WIN32
  static HMODULE GetGDIModule() {
    static HMODULE module = LoadLibraryA("gdi32.dll");
    return module;
  }

  // Resolve against the runtime GDI32 exports on every PE architecture.
  // Some cross-toolchain import libraries lack the newer D3DKMT functions.
#define DXVK_D3DKMT_PROC(name, params, args) \
  NTSTATUS WINAPI name params { \
    static const auto proc = reinterpret_cast<decltype(&name)>(GetProcAddress(GetGDIModule(), #name)); \
    return proc ? proc args : static_cast<NTSTATUS>(0xc0000002); \
  }

  DXVK_D3DKMT_PROC(D3DKMTAcquireKeyedMutex, (D3DKMT_ACQUIREKEYEDMUTEX *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTCloseAdapter, (const D3DKMT_CLOSEADAPTER *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTCreateDCFromMemory, (D3DKMT_CREATEDCFROMMEMORY *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTCreateDevice, (D3DKMT_CREATEDEVICE *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTCreateKeyedMutex2, (D3DKMT_CREATEKEYEDMUTEX2 *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTDestroyAllocation, (const D3DKMT_DESTROYALLOCATION *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTDestroyDCFromMemory, (const D3DKMT_DESTROYDCFROMMEMORY *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTDestroyDevice, (const D3DKMT_DESTROYDEVICE *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTDestroyKeyedMutex, (const D3DKMT_DESTROYKEYEDMUTEX *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTDestroySynchronizationObject, (const D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTEscape, (const D3DKMT_ESCAPE *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTOpenAdapterFromLuid, (D3DKMT_OPENADAPTERFROMLUID *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTOpenKeyedMutex, (D3DKMT_OPENKEYEDMUTEX *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTOpenResource2, (D3DKMT_OPENRESOURCE *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTOpenResourceFromNtHandle, (D3DKMT_OPENRESOURCEFROMNTHANDLE *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTOpenSynchronizationObject, (D3DKMT_OPENSYNCHRONIZATIONOBJECT *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTOpenSyncObjectFromNtHandle, (D3DKMT_OPENSYNCOBJECTFROMNTHANDLE *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTQueryResourceInfo, (D3DKMT_QUERYRESOURCEINFO *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTQueryResourceInfoFromNtHandle, (D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTReleaseKeyedMutex, (D3DKMT_RELEASEKEYEDMUTEX *desc), (desc))
  DXVK_D3DKMT_PROC(D3DKMTShareObjects, (UINT count, const D3DKMT_HANDLE *handles, OBJECT_ATTRIBUTES *attr, UINT access, HANDLE *handle), (count, handles, attr, access, handle))

#undef DXVK_D3DKMT_PROC
#else
  NTSTATUS WINAPI D3DKMTAcquireKeyedMutex(D3DKMT_ACQUIREKEYEDMUTEX *desc) {
    Logger::warn("D3DKMTAcquireKeyedMutex: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTCloseAdapter(const D3DKMT_CLOSEADAPTER *desc) {
    Logger::warn("D3DKMTCloseAdapter: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTCreateDCFromMemory(D3DKMT_CREATEDCFROMMEMORY *desc) {
    Logger::warn("D3DKMTCreateDCFromMemory: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTCreateDevice(D3DKMT_CREATEDEVICE *desc) {
    Logger::warn("D3DKMTCreateDevice: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTCreateKeyedMutex2(D3DKMT_CREATEKEYEDMUTEX2 *desc) {
    Logger::warn("D3DKMTCreateKeyedMutex2: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTDestroyAllocation(const D3DKMT_DESTROYALLOCATION *desc) {
    Logger::warn("D3DKMTDestroyAllocation: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTDestroyDCFromMemory(const D3DKMT_DESTROYDCFROMMEMORY *desc) {
    Logger::warn("D3DKMTDestroyDCFromMemory: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTDestroyDevice(const D3DKMT_DESTROYDEVICE *desc) {
    Logger::warn("D3DKMTDestroyDevice: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTDestroyKeyedMutex(const D3DKMT_DESTROYKEYEDMUTEX *desc) {
    Logger::warn("D3DKMTDestroyKeyedMutex: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTDestroySynchronizationObject(const D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *desc) {
    Logger::warn("D3DKMTDestroySynchronizationObject: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTEscape(const D3DKMT_ESCAPE *desc) {
    Logger::warn("D3DKMTEscape: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTOpenAdapterFromLuid(D3DKMT_OPENADAPTERFROMLUID *desc) {
    Logger::warn("D3DKMTOpenAdapterFromLuid: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTOpenKeyedMutex(D3DKMT_OPENKEYEDMUTEX *desc) {
    Logger::warn("D3DKMTOpenKeyedMutex: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTOpenResource2(D3DKMT_OPENRESOURCE *desc) {
    Logger::warn("D3DKMTOpenResource2: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTOpenResourceFromNtHandle(D3DKMT_OPENRESOURCEFROMNTHANDLE *desc) {
    Logger::warn("D3DKMTOpenResourceFromNtHandle: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTOpenSynchronizationObject(D3DKMT_OPENSYNCHRONIZATIONOBJECT *desc) {
    Logger::warn("D3DKMTOpenSynchronizationObject: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTOpenSyncObjectFromNtHandle(D3DKMT_OPENSYNCOBJECTFROMNTHANDLE *desc) {
    Logger::warn("D3DKMTOpenSyncObjectFromNtHandle: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTQueryResourceInfo(D3DKMT_QUERYRESOURCEINFO *desc) {
    Logger::warn("D3DKMTQueryResourceInfo: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTQueryResourceInfoFromNtHandle(D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *desc) {
    Logger::warn("D3DKMTQueryResourceInfoFromNtHandle: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTReleaseKeyedMutex(D3DKMT_RELEASEKEYEDMUTEX *desc) {
    Logger::warn("D3DKMTReleaseKeyedMutex: Not available on this platform.");
    return -1;
  }

  NTSTATUS WINAPI D3DKMTShareObjects(UINT count, const D3DKMT_HANDLE *handles, OBJECT_ATTRIBUTES *attr, UINT access, HANDLE *handle) {
    Logger::warn("D3DKMTShareObjects: Not available on this platform.");
    return -1;
  }
#endif
}
