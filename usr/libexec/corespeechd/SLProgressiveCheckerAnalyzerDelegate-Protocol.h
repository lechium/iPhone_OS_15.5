//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SLProgressiveCheckerAnalyzer, SLProgressiveCheckerResult;

@protocol SLProgressiveCheckerAnalyzerDelegate <NSObject>
- (void)analyzer:(SLProgressiveCheckerAnalyzer *)arg1 hasFinalResult:(SLProgressiveCheckerResult *)arg2;
- (void)analyzer:(SLProgressiveCheckerAnalyzer *)arg1 hasPartialResult:(SLProgressiveCheckerResult *)arg2;
@end

