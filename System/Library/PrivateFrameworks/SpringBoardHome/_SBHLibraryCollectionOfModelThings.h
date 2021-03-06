//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBFolderIconImageCache, SBHIconImageCache, SBHIconModel, SBHLibraryCategoryMapProvider, SBRootFolder;
@protocol SBIconListLayoutProvider, SBIconViewProviding;

@interface _SBHLibraryCollectionOfModelThings : NSObject
{
    id <SBIconViewProviding> _iconViewProvider;	// 8 = 0x8
    SBHIconModel *_iconModel;	// 16 = 0x10
    SBRootFolder *_rootFolder;	// 24 = 0x18
    id <SBIconListLayoutProvider> _listLayoutProvider;	// 32 = 0x20
    SBHIconImageCache *_iconImageCache;	// 40 = 0x28
    SBFolderIconImageCache *_folderIconImageCache;	// 48 = 0x30
    SBHLibraryCategoryMapProvider *_categoryMapProvider;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001e8877
@property(readonly, nonatomic) __weak SBHLibraryCategoryMapProvider *categoryMapProvider; // @synthesize categoryMapProvider=_categoryMapProvider;
@property(readonly, nonatomic) __weak SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(readonly, nonatomic) __weak SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(readonly, nonatomic) __weak id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(readonly, nonatomic) __weak SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(readonly, nonatomic) __weak SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property(readonly, nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
- (_Bool)examineModelValidityWithError:(id *)arg1;	// IMP=0x00000000001e85a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e835b
- (id)initWithIconViewProvider:(id)arg1 iconModel:(id)arg2 rootFolder:(id)arg3 listLayoutProvider:(id)arg4 iconImageCache:(id)arg5 folderIconImageCache:(id)arg6 categoryMapProvider:(id)arg7;	// IMP=0x00000000001e8230

@end

