//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray;

@interface UILexicon : NSObject <NSCopying>
{
    NSArray *_entries;	// 8 = 0x8
}

+ (id)_lexiconWithTILexicon:(id)arg1;	// IMP=0x0000000000911ca3
- (void).cxx_destruct;	// IMP=0x0000000000911ea1
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000911b73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000911b1f

@end

