//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSIndexPath, SearchUITableModel, UINavigationController;

@protocol SearchUITableViewTesting <NSObject>
@property(copy, nonatomic) CDUnknownBlockType tableViewDidUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewWillUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler;
- (UINavigationController *)navigationController;
- (void)tapAtIndexPath:(NSIndexPath *)arg1;
- (struct CGRect)scrollToIndexPath:(NSIndexPath *)arg1;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (SearchUITableModel *)currentTableModel;
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(void (^)(void))arg1 completion:(void (^)(void))arg2;
- (void)performScrollTestWithCompletion:(void (^)(void))arg1;
@end

