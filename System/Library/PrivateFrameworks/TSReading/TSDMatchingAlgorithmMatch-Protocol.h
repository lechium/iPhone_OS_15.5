//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TSDMatchingAlgorithmMatch;

@protocol TSDMatchingAlgorithmMatch
@property(readonly, nonatomic) id outgoingMatchObject;
@property(readonly, nonatomic) id incomingMatchObject;
@property(readonly, nonatomic) long long matchCost;
- (_Bool)conflictsWithMatch:(id <TSDMatchingAlgorithmMatch>)arg1;
@end

