//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRUDiffableDataSource, NSString;

@protocol MRUDiffableDataSourceDelegate <NSObject>
- (void)dataSource:(MRUDiffableDataSource *)arg1 moveItemToTopWithIdentifier:(NSString *)arg2;
- (void)dataSource:(MRUDiffableDataSource *)arg1 moveItemWithIdentifier:(NSString *)arg2 aferIndentifier:(NSString *)arg3;
- (void)dataSource:(MRUDiffableDataSource *)arg1 didDeleteItemWithIdentifier:(NSString *)arg2;
@end

