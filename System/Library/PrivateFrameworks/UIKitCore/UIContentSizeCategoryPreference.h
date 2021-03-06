//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIContentSizeCategoryPreference : NSObject
{
    NSString *_preferredContentSizeCategory;	// 8 = 0x8
    NSString *_preferredContentSizeCategoryCarPlay;	// 16 = 0x10
}

+ (void)_populateUserDefaultsContentSizeCategory:(id *)arg1 carPlay:(id *)arg2;	// IMP=0x0000000000fa9e84
+ (id)system;	// IMP=0x0000000000fa98ff
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fa9861
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1;	// IMP=0x0000000000fa97e8
+ (void)_resetSystemPreferenceOverride;	// IMP=0x0000000000fa97cb
+ (void)asyncResetSystemPreferenceOverride;	// IMP=0x0000000000fa9756
+ (void)asyncOverrideSystemWithPreference:(id)arg1;	// IMP=0x0000000000fa969c
+ (void)resetSystemPreferenceOverride;	// IMP=0x0000000000fa9663
+ (void)overrideSystemWithPreference:(id)arg1;	// IMP=0x0000000000fa960c
+ (void)overrideSystemWithPreference:(id)arg1 forBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fa953d
- (void).cxx_destruct;	// IMP=0x0000000000fa9f6c
@property(retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay; // @synthesize preferredContentSizeCategoryCarPlay=_preferredContentSizeCategoryCarPlay;
@property(retain, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
- (id)description;	// IMP=0x0000000000fa9dce
- (unsigned long long)hash;	// IMP=0x0000000000fa9d20
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fa9b5c
- (void)checkForChanges;	// IMP=0x0000000000fa9b56
- (id)init;	// IMP=0x0000000000fa9b48
- (id)initWithRawUserDefaults;	// IMP=0x0000000000fa9aa8
- (id)initWithContentSizeCategory:(id)arg1 carPlay:(id)arg2;	// IMP=0x0000000000fa99ef
- (id)initWithContentSizeCategory:(id)arg1;	// IMP=0x0000000000fa9966

@end

