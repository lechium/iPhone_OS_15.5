//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsFeed/UIActivityItemSource-Protocol.h>

@class MISSING_TYPE;

@interface _TtC8NewsFeed34SharingIssueTextActivityItemSource : NSObject <UIActivityItemSource>
{
    MISSING_TYPE *issue;	// 8 = 0x8
    MISSING_TYPE *itemTitle;	// 16 = 0x10
    MISSING_TYPE *itemCoverDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009a1a80
- (id)init;	// IMP=0x00000000009a1a20
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x00000000009a1940
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;	// IMP=0x00000000009a17d0
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x00000000009a1650
- (id)activityViewControllerPlaceholderItem:(id)arg1;	// IMP=0x00000000009a0fd0

@end

