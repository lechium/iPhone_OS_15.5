//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFGallerySessionAddShortcutEvent
{
    NSString *_key;	// 8 = 0x8
    NSString *_sessionIdentifier;	// 16 = 0x10
    NSString *_shortcutIdentifier;	// 24 = 0x18
}

+ (Class)codableEventClass;	// IMP=0x00000000002864ae
- (void).cxx_destruct;	// IMP=0x0000000000286525
@property(copy, nonatomic) NSString *shortcutIdentifier; // @synthesize shortcutIdentifier=_shortcutIdentifier;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

