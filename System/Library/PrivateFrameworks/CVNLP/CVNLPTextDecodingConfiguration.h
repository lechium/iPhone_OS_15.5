//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CVNLPTextDecodingConfiguration : NSObject
{
    CDUnknownBlockType _commitActionBlock;	// 8 = 0x8
}

+ (CDUnknownBlockType)defaultWhitespaceCommitActionBehavior;	// IMP=0x000000000001c320
+ (CDUnknownBlockType)defaultCommitActionBehaviorForLocale:(id)arg1;	// IMP=0x000000000001c1c0
@property(nonatomic) CDUnknownBlockType commitActionBlock; // @synthesize commitActionBlock=_commitActionBlock;
- (id)initWithCommitActionBehavior:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c180

@end
