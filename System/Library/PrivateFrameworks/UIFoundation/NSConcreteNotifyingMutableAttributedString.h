//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSConcreteMutableAttributedString.h>

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString
{
    id _delegate;	// 32 = 0x20
}

+ (Class)_mutableStringClass;	// IMP=0x00000000000aae2a
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;	// IMP=0x00000000000aae0d
- (void)endEditing;	// IMP=0x00000000000aadf0
- (void)beginEditing;	// IMP=0x00000000000aadd3
- (id)delegate;	// IMP=0x00000000000aadc2
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000aadb1

@end
