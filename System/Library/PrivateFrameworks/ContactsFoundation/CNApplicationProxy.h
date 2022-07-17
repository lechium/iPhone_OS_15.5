//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CNApplicationProxy : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_teamIdentifier;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    NSArray *_activityTypes;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000238a6
- (void).cxx_destruct;	// IMP=0x0000000000023d2f
@property(copy, nonatomic) NSArray *activityTypes; // @synthesize activityTypes=_activityTypes;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x0000000000023b51
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023abc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000238ae
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4;	// IMP=0x000000000002372d
- (id)initWithLSApplicationProxy:(id)arg1;	// IMP=0x0000000000023644
- (id)init;	// IMP=0x0000000000023607

@end
