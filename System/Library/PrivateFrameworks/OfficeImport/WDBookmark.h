//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark
{
    NSString *mName;	// 8 = 0x8
    int mBookmarkType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ec319
- (id)description;	// IMP=0x00000000003ec2db
- (void)setBookmarkType:(int)arg1;	// IMP=0x00000000001a854d
- (int)bookmarkType;	// IMP=0x00000000000fcf31
- (int)runType;	// IMP=0x00000000000f4ffe
- (void)setName:(id)arg1;	// IMP=0x00000000001a855d
- (id)name;	// IMP=0x00000000000f5014
- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;	// IMP=0x00000000000ddff9

@end

