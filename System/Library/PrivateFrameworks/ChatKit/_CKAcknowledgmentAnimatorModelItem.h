//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKEntity, NSIndexPath;

@interface _CKAcknowledgmentAnimatorModelItem : NSObject
{
    CKEntity *_entity;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
    long long _ackVoteCount;	// 24 = 0x18
    long long _acknowledgmentType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002f8c8e
@property(nonatomic) long long acknowledgmentType; // @synthesize acknowledgmentType=_acknowledgmentType;
@property(nonatomic) long long ackVoteCount; // @synthesize ackVoteCount=_ackVoteCount;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) CKEntity *entity; // @synthesize entity=_entity;

@end
