//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MISSING_TYPE;
@protocol UICollectionViewDataSource;

@protocol CollectionViewDataSourceDelegate <NSObject>
- (MISSING_TYPE *)dataSource:requiresDeletionOfIndexSet:reloadOfIndexSet:insertionOfIndexSet: /* Error: Ran out of types for this method. */;
- (void)dataSource:(id <UICollectionViewDataSource>)arg1 requiresReloadOfSection:(unsigned long long)arg2;
- (void)dataSourceRequiresReload:(id <UICollectionViewDataSource>)arg1;
@end
