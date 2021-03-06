//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Stocks/NSObject-Protocol.h>

@class StockChartView;

@protocol StockChartViewDelegate <NSObject>
- (void)stockChartViewNeedsLoadingStatusUpdated:(StockChartView *)arg1;
- (_Bool)stockChartViewIsCurrentChartView:(StockChartView *)arg1;
- (void)stockChartView:(StockChartView *)arg1 chartIntervalDidChange:(long long)arg2;

@optional
- (void)stockChartViewFinishedInitialLoad:(StockChartView *)arg1;
@end

