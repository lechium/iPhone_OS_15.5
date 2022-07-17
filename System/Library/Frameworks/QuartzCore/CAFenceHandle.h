//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _handle_name;	// 8 = 0x8
    unsigned long long _fence_name;	// 16 = 0x10
    unsigned int _port;	// 24 = 0x18
    struct Mutex _invalidation_mutex;	// 32 = 0x20
    struct SpinLock _lock;	// 96 = 0x60
    _Bool _invalidated;	// 100 = 0x64
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000157d18
+ (id)_newFenceWithPort:(unsigned int)arg1 name:(unsigned long long)arg2;	// IMP=0x0000000000157cc5
+ (id)handleForPort:(unsigned int)arg1 fenceId:(unsigned long long)arg2;	// IMP=0x0000000000157c8c
+ (id)handleFromXPCRepresentation:(id)arg1;	// IMP=0x0000000000157c56
+ (id)newFenceFromDefaultServer;	// IMP=0x0000000000157bee
+ (id)newFenceFromServer:(unsigned int)arg1;	// IMP=0x0000000000157bd3
+ (id)newObservableFenceFromServer:(unsigned int)arg1;	// IMP=0x0000000000157bb5
+ (id)_newFenceFromServer:(unsigned int)arg1 isObservable:(_Bool)arg2;	// IMP=0x0000000000157b07
- (id).cxx_construct;	// IMP=0x0000000000157af7
- (id)description;	// IMP=0x0000000000157a55
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001579bf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000157935
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001578bb
- (void)_accessMachPort:(CDUnknownBlockType)arg1;	// IMP=0x0000000000157838
- (unsigned int)_copyPort;	// IMP=0x00000000001577ff
@property(readonly) unsigned long long _name;
- (void)accessMachPort:(CDUnknownBlockType)arg1;	// IMP=0x00000000001577e3
- (unsigned int)copyPort;	// IMP=0x00000000001577d1
- (unsigned long long)fenceId;	// IMP=0x00000000001577c7
- (id)createXPCRepresentation;	// IMP=0x0000000000157763
- (void)invalidate;	// IMP=0x00000000001576d4
@property(readonly, getter=isInvalidated) _Bool invalidated;
@property(readonly, getter=isUsable) _Bool usable;
- (id)init;	// IMP=0x000000000015764f
- (unsigned int)_copyUntrackedPort;	// IMP=0x00000000001575d7
- (void)dealloc;	// IMP=0x0000000000157553
- (id)_initWithXPCRepresentation:(id)arg1;	// IMP=0x00000000001574a0
- (id)_initWithPort:(unsigned int)arg1 name:(unsigned long long)arg2;	// IMP=0x00000000001573b0

@end
