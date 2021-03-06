//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface ASDSystemAppRequest
{
    _Bool _userInitiated;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_storeItemID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005de1c
- (void).cxx_destruct;	// IMP=0x000000000005e192
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x000000000005dff1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005df31
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005de24
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000000005dda2

@end

