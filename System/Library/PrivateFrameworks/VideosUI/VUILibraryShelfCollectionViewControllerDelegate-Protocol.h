//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, UICollectionView, VUILibraryShelfCollectionViewController, VUIMediaEntity;

@protocol VUILibraryShelfCollectionViewControllerDelegate <NSObject>
- (void)shelfCollectionViewController:(VUILibraryShelfCollectionViewController *)arg1 collectionView:(UICollectionView *)arg2 didSelectMediaEntity:(VUIMediaEntity *)arg3 atIndexPath:(NSIndexPath *)arg4;

@optional
- (void)seeAllButtonPressed:(VUILibraryShelfCollectionViewController *)arg1;
@end

