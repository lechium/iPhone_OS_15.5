//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface lib_IXAppInstallCoordinatorTag : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSUUID *_coordinatorID;	// 16 = 0x10
}

+ (id)tagWithCoordinatorID:(id)arg1 bundleID:(id)arg2;	// IMP=0x002000000009e95b
- (void).cxx_destruct;	// IMP=0x002000000009ebe0
@property(readonly) NSUUID *coordinatorID; // @synthesize coordinatorID=_coordinatorID;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned long long)hash;	// IMP=0x001000000009eb79
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009eb16
- (id)description;	// IMP=0x001000000009ea99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009ea8e
- (_Bool)isEqualToTag:(id)arg1;	// IMP=0x001000000009e9ff

@end
