//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBHLibraryCategoriesRootFolder, SBHLibraryCategoryMapProvider;

@interface SBHLibraryPodFolderControllerConfiguration
{
    SBHLibraryCategoriesRootFolder *_categoriesFolder;	// 8 = 0x8
    SBHLibraryCategoryMapProvider *_categoryMapProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002017c2
@property(retain, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider; // @synthesize categoryMapProvider=_categoryMapProvider;
@property(retain, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder; // @synthesize categoriesFolder=_categoriesFolder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000020169d
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000020158d

@end

