//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDOStreamData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSUnkeyedPortCoder
{
    id sndPort;	// 16 = 0x10
    id rcvPort;	// 24 = 0x18
    NSDOStreamData *doStreamData;	// 32 = 0x20
    NSMutableArray *components;	// 40 = 0x28
    NSMutableArray *importedObjects;	// 48 = 0x30
    unsigned long long componentIndex;	// 56 = 0x38
    _Bool isBycopy;	// 64 = 0x40
    _Bool isByref;	// 65 = 0x41
    _Bool isValid;	// 66 = 0x42
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010156a
+ (void)_enableLogging:(_Bool)arg1;	// IMP=0x00000000001012b4
- (id)decodeRetainedObject;	// IMP=0x0000000000103e23
- (void)encodeByrefObject:(id)arg1;	// IMP=0x0000000000103e09
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x0000000000103def
- (void)encodeObject:(id)arg1 isBycopy:(_Bool)arg2 isByref:(_Bool)arg3;	// IMP=0x00000000001039e3
- (void)decodeReturnValue:(id)arg1;	// IMP=0x0000000000103682
- (void)encodeReturnValue:(id)arg1;	// IMP=0x00000000001033e9
- (id)decodeInvocation;	// IMP=0x0000000000102d13
- (void)encodeInvocation:(id)arg1;	// IMP=0x0000000000102778
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;	// IMP=0x000000000010274c
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x0000000000101f7d
- (id)decodePortObject;	// IMP=0x0000000000101f4a
- (void)encodePortObject:(id)arg1;	// IMP=0x0000000000101f19
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x0000000000101e6c
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000101dcd
- (id)decodeDataObject;	// IMP=0x0000000000101b69
- (void)encodeDataObject:(id)arg1;	// IMP=0x000000000010188c
- (long long)versionForClassName:(id)arg1;	// IMP=0x000000000010183b
- (_Bool)isByref;	// IMP=0x000000000010182b
- (_Bool)isBycopy;	// IMP=0x000000000010181b
- (id)_proxyForLocalObject:(id)arg1;	// IMP=0x00000000001017b7
- (id)connection;	// IMP=0x0000000000101785
- (void)importObject:(id)arg1;	// IMP=0x0000000000101738
- (id)importedObjects;	// IMP=0x0000000000101727
- (id)finishedComponents;	// IMP=0x0000000000101715
- (id)components;	// IMP=0x00000000001016ac
- (void)dealloc;	// IMP=0x00000000001015fe
- (void)invalidate;	// IMP=0x0000000000101578
- (void)dispatch;	// IMP=0x00000000001014e7
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;	// IMP=0x00000000001012c0
- (id)debugDescription;	// IMP=0x000000000010123a

@end
