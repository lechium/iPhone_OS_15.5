//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UITableViewDataSource, UITableViewDelegate;

@protocol FATableViewProtocol
@property(nonatomic) __weak id <UITableViewDataSource> dataSource;
@property(nonatomic) __weak id <UITableViewDelegate> delegate;
- (void)reloadData;
@end

