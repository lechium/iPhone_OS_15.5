//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CollectionHandler, SearchResult, UIView;

@protocol DeleteDelegate <NSObject>
- (void)confirmDeleteCollection:(CollectionHandler *)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect)arg3 completion:(void (^)(_Bool))arg4;
- (void)deleteItem:(id)arg1 sourceView:(UIView *)arg2 completion:(void (^)(_Bool))arg3;
- (void)deleteMarkedLocation:(SearchResult *)arg1;
@end
