//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSInvalidatable-Protocol.h>
#import <BackBoardServices/BSXPCCoding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class CAFenceHandle, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable>
{
    CAFenceHandle *_caFence;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d57d
+ (id)newFenceHandleForCAFenceHandle:(id)arg1;	// IMP=0x000000000002d534
+ (id)newFenceHandleForContext:(id)arg1;	// IMP=0x000000000002d43f
- (void).cxx_destruct;	// IMP=0x000000000002d392
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d32f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d30c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d27d
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000002d221
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000002d16e
@property(readonly, copy) NSString *description;
- (id)CAFenceHandle;	// IMP=0x000000000002d137
- (unsigned int)CAPort;	// IMP=0x000000000002d091
- (void)invalidate;	// IMP=0x000000000002d07b
@property(readonly, nonatomic, getter=isUsable) _Bool usable;
@property(readonly, nonatomic) unsigned long long fenceName;
- (void)dealloc;	// IMP=0x000000000002d01b
- (id)_initWithCAFenceHandle:(id)arg1;	// IMP=0x000000000002cfb0
- (id)init;	// IMP=0x000000000002cf22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

