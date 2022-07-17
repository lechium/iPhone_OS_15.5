//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PSEnsembleModel;

@interface _PSSuggesterConfiguration : NSObject
{
    long long _maximumNumberOfSuggestions;	// 8 = 0x8
    _PSEnsembleModel *_suggestionModel;	// 16 = 0x10
}

+ (id)defaultConfiguration;	// IMP=0x000000000006584b
- (void).cxx_destruct;	// IMP=0x00000000000659b3
@property(retain, nonatomic) _PSEnsembleModel *suggestionModel; // @synthesize suggestionModel=_suggestionModel;
@property(nonatomic) long long maximumNumberOfSuggestions; // @synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions;
- (id)description;	// IMP=0x00000000000658b7

@end
