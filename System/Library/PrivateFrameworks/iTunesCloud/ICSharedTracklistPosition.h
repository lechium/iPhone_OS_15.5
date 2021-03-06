//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICSharedTracklistPosition : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_afterItemIdentifier;	// 16 = 0x10
}

+ (id)playLastPositionWithAfterItemIdentifierHint:(id)arg1;	// IMP=0x00000000000bd9fc
+ (id)playNextPositionWithAfterItemIdentifierHint:(id)arg1;	// IMP=0x00000000000bd990
+ (id)specifiedPositionAfterItemIdentifier:(id)arg1;	// IMP=0x00000000000bd924
- (void).cxx_destruct;	// IMP=0x00000000000bd914
@property(readonly, copy, nonatomic) NSString *afterItemIdentifier; // @synthesize afterItemIdentifier=_afterItemIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

