//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, SXDataTableBlueprint;
@protocol SXDataTableDataSource, SXDataTableViewDataSource;

@interface SXDataTableView
{
    id <SXDataTableViewDataSource> _viewDataSource;	// 8 = 0x8
    id <SXDataTableDataSource> _dataSource;	// 16 = 0x10
    SXDataTableBlueprint *_blueprint;	// 24 = 0x18
    NSMutableDictionary *_rowViews;	// 32 = 0x20
    NSMutableDictionary *_columnViews;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000012a455
- (struct CGPoint)originOffset;	// IMP=0x000000000012a425

@end

