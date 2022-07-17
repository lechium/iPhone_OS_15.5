//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesUI/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface ICSearchUserInput : NSObject <NSCopying>
{
    _Bool _isEmpty;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
    NSArray *_suggestions;	// 24 = 0x18
    NSString *_keyboardLanguage;	// 32 = 0x20
}

+ (id)emptyInput;	// IMP=0x00000000000931c8
- (void).cxx_destruct;	// IMP=0x00000000000935b4
@property(readonly, nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(readonly, copy, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009348e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093357
- (void)_configureEmptyInput;	// IMP=0x000000000009331a
- (id)initWithSearchString:(id)arg1 suggestions:(id)arg2 keyboardLanguage:(id)arg3;	// IMP=0x00000000000931fb

@end
