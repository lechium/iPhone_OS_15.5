//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFSearchResult, SFSearchSuggestion;

@interface STSCategoryResult : NSObject
{
    _Bool _clearButtonHidden;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    SFSearchSuggestion *_suggestion;	// 32 = 0x20
    SFSearchResult *_searchResult;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000f4fe
@property(retain, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) SFSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) _Bool clearButtonHidden; // @synthesize clearButtonHidden=_clearButtonHidden;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

