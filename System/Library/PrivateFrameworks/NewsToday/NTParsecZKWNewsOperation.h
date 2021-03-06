//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class NSDate, NSDictionary, NSOrderedSet, NSString, PARSession, SFRankingFeedback;

@interface NTParsecZKWNewsOperation : FCOperation
{
    PARSession *_session;	// 8 = 0x8
    NSDate *_fetchDate;	// 16 = 0x10
    NSOrderedSet *_resultSearchResultIDs;	// 24 = 0x18
    NSDictionary *_resultSearchResultsBySearchResultID;	// 32 = 0x20
    SFRankingFeedback *_resultRankingFeedback;	// 40 = 0x28
    CDUnknownBlockType _newsCompletionHandler;	// 48 = 0x30
    double _scale;	// 56 = 0x38
    NSString *_keyboardInputMode;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000032f77
@property(copy, nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) CDUnknownBlockType newsCompletionHandler; // @synthesize newsCompletionHandler=_newsCompletionHandler;
@property(copy, nonatomic) SFRankingFeedback *resultRankingFeedback; // @synthesize resultRankingFeedback=_resultRankingFeedback;
@property(copy, nonatomic) NSDictionary *resultSearchResultsBySearchResultID; // @synthesize resultSearchResultsBySearchResultID=_resultSearchResultsBySearchResultID;
@property(copy, nonatomic) NSOrderedSet *resultSearchResultIDs; // @synthesize resultSearchResultIDs=_resultSearchResultIDs;
@property(copy, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(retain, nonatomic) PARSession *session; // @synthesize session=_session;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x0000000000032e01
- (void)performOperation;	// IMP=0x0000000000032728
- (void)setTimeoutDuration:(double)arg1;	// IMP=0x00000000000326f1
- (_Bool)validateOperation;	// IMP=0x000000000003264d
- (id)init;	// IMP=0x00000000000325f9

@end

