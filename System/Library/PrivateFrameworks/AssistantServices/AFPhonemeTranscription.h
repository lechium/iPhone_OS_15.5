//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFTranscriptionType-Protocol.h>

@class NSArray, NSString;

@interface AFPhonemeTranscription : NSObject <AFTranscriptionType>
{
    NSString *_orthography;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSArray *_phonemeSuggestions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a77b
- (void).cxx_destruct;	// IMP=0x000000000002aa00
@property(retain, nonatomic) NSArray *phonemeSuggestions; // @synthesize phonemeSuggestions=_phonemeSuggestions;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a92c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a783

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
