//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SUScriptActivityViewController
{
    NSArray *_applicationActivities;	// 80 = 0x50
    NSArray *_providers;	// 88 = 0x58
}

+ (void)initialize;	// IMP=0x000000000010e612
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000010e549
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x000000000010e4f5
- (id)scriptAttributeKeys;	// IMP=0x000000000010e5af
- (id)attributeKeys;	// IMP=0x000000000010e59d
@property(readonly) NSString *activityTypeSaveToCameraRoll;
@property(readonly) NSString *activityTypePrint;
@property(readonly) NSString *activityTypePostToWeibo;
@property(readonly) NSString *activityTypePostToVimeo;
@property(readonly) NSString *activityTypePostToTwitter;
@property(readonly) NSString *activityTypePostToFlickr;
@property(readonly) NSString *activityTypePostToFacebook;
@property(readonly) NSString *activityTypeMessage;
@property(readonly) NSString *activityTypeMail;
@property(readonly) NSString *activityTypeCopyToPasteboard;
@property(readonly) NSString *activityTypeAssignToContact;
@property(readonly) NSString *activityTypeAddToReadingList;
@property(copy) id excludedActivityTypes;
- (id)_className;	// IMP=0x000000000010e16a
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;	// IMP=0x000000000010e02a
- (id)newNativeViewController;	// IMP=0x000000000010dd4e
- (void)dealloc;	// IMP=0x000000000010dcbf
- (id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2;	// IMP=0x000000000010dc0c

@end
