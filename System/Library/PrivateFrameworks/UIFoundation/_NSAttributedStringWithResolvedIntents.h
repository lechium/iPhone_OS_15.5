//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface _NSAttributedStringWithResolvedIntents : NSAttributedString
{
    NSAttributedString *_string;	// 8 = 0x8
    Class _resolver;	// 16 = 0x10
}

- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000006a3aa
- (id)string;	// IMP=0x000000000006a38d
- (id)initWithUnresolvedString:(id)arg1 resolver:(Class)arg2;	// IMP=0x000000000006a31d

@end
