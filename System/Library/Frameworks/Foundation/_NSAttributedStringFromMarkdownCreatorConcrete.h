//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/_NSAttributedStringFromMarkdownCreator-Protocol.h>

@class NSMutableAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _NSAttributedStringFromMarkdownCreatorConcrete : NSObject <_NSAttributedStringFromMarkdownCreator>
{
    NSMutableAttributedString *_result;	// 8 = 0x8
}

- (void)finalizeWithLanguageIdentifier:(id)arg1;	// IMP=0x000000000016b91d
- (id)parseExtendedAttributesFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016b79d
- (void)appendString:(id)arg1;	// IMP=0x000000000016b768
- (unsigned short)lastCharacter;	// IMP=0x000000000016b6f9
- (void)appendString:(id)arg1 with:(id)arg2;	// IMP=0x000000000016b69a
- (id)result;	// IMP=0x000000000016b683
- (void)dealloc;	// IMP=0x000000000016b625
- (id)init;	// IMP=0x000000000016b5b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

