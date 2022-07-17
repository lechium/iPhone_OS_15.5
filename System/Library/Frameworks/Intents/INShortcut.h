//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSItemProviderReading-Protocol.h>
#import <Intents/NSItemProviderWriting-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INIntent, NSArray, NSData, NSString, NSUserActivity;

@interface INShortcut : NSObject <INKeyImageProducing, NSItemProviderReading, NSItemProviderWriting, INImageProxyInjecting, NSSecureCoding, NSCopying>
{
    NSData *_activityData;	// 8 = 0x8
    INIntent *_intent;	// 16 = 0x10
    NSUserActivity *_userActivity;	// 24 = 0x18
    INImage *_activityImage;	// 32 = 0x20
    NSString *_activitySubtitle;	// 40 = 0x28
    NSString *_activityBundleIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000028fa0b
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x0000000000133398
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000133331
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x00000000001332ca
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013325d
- (void).cxx_destruct;	// IMP=0x000000000028f69b
@property(readonly, copy, nonatomic) NSString *activityBundleIdentifier; // @synthesize activityBundleIdentifier=_activityBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *activitySubtitle; // @synthesize activitySubtitle=_activitySubtitle;
@property(readonly, copy, nonatomic) INImage *activityImage; // @synthesize activityImage=_activityImage;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000028f4fd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028f2af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028f2a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028eed8
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *_associatedAppBundleIdentifier;
@property(readonly, nonatomic) NSString *_subtitle;
@property(readonly, nonatomic) NSString *_title;
@property(readonly, copy, nonatomic) NSData *activityData; // @synthesize activityData=_activityData;
- (id)shortcutWithActivityBundleIdentifier:(id)arg1;	// IMP=0x000000000028e9d0
- (id)shortcutWithActivityImage:(id)arg1;	// IMP=0x000000000028e8b4
- (id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4;	// IMP=0x000000000028e5f6
- (id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000028e3eb
- (id)initWithUserActivity:(id)arg1;	// IMP=0x000000000028e3d7
- (id)_initWithIntent:(id)arg1;	// IMP=0x000000000028e34d
- (id)initWithIntent:(id)arg1;	// IMP=0x000000000028e2c8
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x00000000000c0790
@property(readonly) INImage *_keyImage;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001331b1
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000021547e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end
