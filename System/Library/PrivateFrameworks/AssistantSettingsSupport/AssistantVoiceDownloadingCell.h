//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class AssistantVoiceDownloadingView;

@interface AssistantVoiceDownloadingCell : PSTableCell
{
    AssistantVoiceDownloadingView *_downloadingView;	// 120 = 0x78
    _Bool _downloading;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000000a9f5
- (void)setDownloading:(_Bool)arg1;	// IMP=0x000000000000a925
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000000a875
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000000a7e9

@end

