//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerContainerItem
{
    NSString *_cachedSubtitle;	// 88 = 0x58
    BRContainer *_container;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000001e09e
- (id)sortPath;	// IMP=0x000000000001e028
- (id)modificationDate;	// IMP=0x000000000001dfd8
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2 wantsBorder:(_Bool *)arg3;	// IMP=0x000000000001df2e
- (id)url;	// IMP=0x000000000001df11
- (id)subtitle;	// IMP=0x000000000001defc
- (void)_modelChanged;	// IMP=0x000000000001de4a
- (id)title;	// IMP=0x000000000001dd2b
- (long long)type;	// IMP=0x000000000001dd20
@property(readonly, nonatomic) BRContainer *container;
- (id)initWithContainer:(id)arg1;	// IMP=0x000000000001dc9d

@end

