//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSASComment;

@interface MSASCommentChange : NSObject
{
    int _deletionIndex;	// 8 = 0x8
    int _type;	// 12 = 0xc
    MSASComment *_comment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004a852
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int deletionIndex; // @synthesize deletionIndex=_deletionIndex;
@property(retain, nonatomic) MSASComment *comment; // @synthesize comment=_comment;
- (id)description;	// IMP=0x000000000004a738

@end
