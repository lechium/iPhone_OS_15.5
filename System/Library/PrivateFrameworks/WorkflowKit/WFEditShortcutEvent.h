//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFEditShortcutEvent
{
    unsigned int _actionCount;	// 8 = 0x8
    unsigned int _numberOfEngagedSuggestions;	// 12 = 0xc
    unsigned int _numberOfManuallyAddedActions;	// 16 = 0x10
    unsigned int _startingActionCount;	// 20 = 0x14
    NSString *_key;	// 24 = 0x18
    NSString *_shortcutSource;	// 32 = 0x20
    NSString *_addToSiriBundleIdentifier;	// 40 = 0x28
    NSString *_galleryIdentifier;	// 48 = 0x30
}

+ (id)serializablePropertyTransformers;	// IMP=0x00000000001ea03c
+ (Class)codableEventClass;	// IMP=0x00000000001ea02b
- (void).cxx_destruct;	// IMP=0x00000000001ea20a
@property(nonatomic) unsigned int startingActionCount; // @synthesize startingActionCount=_startingActionCount;
@property(nonatomic) unsigned int numberOfManuallyAddedActions; // @synthesize numberOfManuallyAddedActions=_numberOfManuallyAddedActions;
@property(nonatomic) unsigned int numberOfEngagedSuggestions; // @synthesize numberOfEngagedSuggestions=_numberOfEngagedSuggestions;
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(copy, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

