//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class _PSSuggestion;

@interface _PSCNAutocompleteFeedbackTappedSuggestion : NSObject <NSSecureCoding>
{
    _PSSuggestion *_suggestion;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028e39
- (void).cxx_destruct;	// IMP=0x0000000000028e4b
@property(readonly, copy, nonatomic) _PSSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028e16
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028d6e
- (id)initWithSuggestion:(id)arg1;	// IMP=0x0000000000028d03

@end

