//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject
{
    NSMutableDictionary *_languages;	// 8 = 0x8
    NSMapTable *_pendingSaves;	// 16 = 0x10
    CDUnknownBlockType _languageUpdated;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000120b5
@property(copy, nonatomic) CDUnknownBlockType languageUpdated; // @synthesize languageUpdated=_languageUpdated;
- (_Bool)shouldCacheObject:(id)arg1;	// IMP=0x0000000000012056
- (void)noteObject:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000000011f7b
- (void)willLoadLanguage:(id)arg1;	// IMP=0x0000000000011efc
- (void)languagePulled:(id)arg1;	// IMP=0x0000000000011bfd
- (void)languagesChanged:(id)arg1;	// IMP=0x0000000000011bd3
- (void)dealloc;	// IMP=0x0000000000011b5e
- (id)init;	// IMP=0x0000000000011a1b

@end
