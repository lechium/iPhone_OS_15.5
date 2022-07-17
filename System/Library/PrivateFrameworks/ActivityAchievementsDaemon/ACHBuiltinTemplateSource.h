//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHTemplateSource-Protocol.h>

@class NSString;
@protocol ACHTemplateSourceDelegate;

@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateSource>
{
}

- (id)stickerBundleURLForTemplate:(id)arg1;	// IMP=0x0000000000020b2e
- (id)propertyListBundleURLForTemplate:(id)arg1;	// IMP=0x0000000000020a73
- (id)resourceBundleURLForTemplate:(id)arg1;	// IMP=0x00000000000209b8
- (id)localizationBundleURLForTemplate:(id)arg1;	// IMP=0x00000000000208fd
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002028f
- (_Bool)sourceShouldRunForDate:(id)arg1;	// IMP=0x0000000000020287
@property(readonly, nonatomic) long long runCadence;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<ACHTemplateSourceDelegate> *delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
