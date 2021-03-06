//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFOpenShortcutEvent
{
    unsigned int _actionCount;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_shortcutSource;	// 24 = 0x18
    NSString *_addToSiriBundleIdentifier;	// 32 = 0x20
    NSString *_galleryIdentifier;	// 40 = 0x28
}

+ (id)serializablePropertyTransformers;	// IMP=0x000000000034eefe
+ (Class)codableEventClass;	// IMP=0x000000000034eeed
- (void).cxx_destruct;	// IMP=0x000000000034f039
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(copy, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

