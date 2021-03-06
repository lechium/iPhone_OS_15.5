//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Stocks/StockChartViewDelegate-Protocol.h>
#import <Stocks/UITableViewDataSource-Protocol.h>
#import <Stocks/UITableViewDelegate-Protocol.h>

@class ChartUpdater, NSString, NetPreferences, Stock, StockChartView, StockFetcher, StockManager, StockUpdateManager, StocksLayout, StocksStyle, UIButton, UILabel, UITableView, UIView;

@interface StockPlatterViewController : UIViewController <StockChartViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    StockFetcher *_stockFetcher;	// 8 = 0x8
    Stock *_stock;	// 16 = 0x10
    long long _chartInterval;	// 24 = 0x18
    UITableView *_stocksTableView;	// 32 = 0x20
    UIView *_statusBarView;	// 40 = 0x28
    NetPreferences *_netPreferences;	// 48 = 0x30
    StockUpdateManager *_stockUpdateManager;	// 56 = 0x38
    StockChartView *_chartView;	// 64 = 0x40
    ChartUpdater *_chartUpdater;	// 72 = 0x48
    StocksStyle *_style;	// 80 = 0x50
    StocksLayout *_layout;	// 88 = 0x58
    StockManager *_stockManager;	// 96 = 0x60
    UIButton *_attributionButton;	// 104 = 0x68
    UILabel *_exchangeStatusLabel;	// 112 = 0x70
    NSString *_stockTicker;	// 120 = 0x78
    long long _rowDataType;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000307b7
@property(nonatomic) long long rowDataType; // @synthesize rowDataType=_rowDataType;
@property(retain, nonatomic) NSString *stockTicker; // @synthesize stockTicker=_stockTicker;
@property(retain, nonatomic) UILabel *exchangeStatusLabel; // @synthesize exchangeStatusLabel=_exchangeStatusLabel;
@property(retain, nonatomic) UIButton *attributionButton; // @synthesize attributionButton=_attributionButton;
@property(retain, nonatomic) StockManager *stockManager; // @synthesize stockManager=_stockManager;
@property(retain, nonatomic) StocksLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) StocksStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) ChartUpdater *chartUpdater; // @synthesize chartUpdater=_chartUpdater;
@property(retain, nonatomic) StockChartView *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) StockUpdateManager *stockUpdateManager; // @synthesize stockUpdateManager=_stockUpdateManager;
@property(retain, nonatomic) NetPreferences *netPreferences; // @synthesize netPreferences=_netPreferences;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) UITableView *stocksTableView; // @synthesize stocksTableView=_stocksTableView;
@property(nonatomic) long long chartInterval; // @synthesize chartInterval=_chartInterval;
@property(retain, nonatomic) Stock *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) StockFetcher *stockFetcher; // @synthesize stockFetcher=_stockFetcher;
- (void)_attributionButtonPressed:(id)arg1;	// IMP=0x00000000000304d3
- (void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;	// IMP=0x00000000000304cd
- (_Bool)stockChartViewIsCurrentChartView:(id)arg1;	// IMP=0x00000000000304c5
- (void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;	// IMP=0x00000000000304bf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000303cc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000303c1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000303b6
- (void)_cleanup;	// IMP=0x00000000000302d1
- (void)_updateExchangeData;	// IMP=0x000000000003020e
- (void)_setupStockWithTicker:(id)arg1;	// IMP=0x0000000000030022
- (void)updateChartForInterval:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f9a0
- (struct CGSize)preferredContentSize;	// IMP=0x000000000002f69b
- (void)viewDidLoad;	// IMP=0x000000000002e5e7
- (void)dealloc;	// IMP=0x000000000002e5a9
- (id)initWithStockTicker:(id)arg1;	// IMP=0x000000000002df16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

