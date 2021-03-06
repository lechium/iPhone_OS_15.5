//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptRangedAtom : NSObject
{
    NSString *_replacementText;	// 8 = 0x8
    struct _NSRange _editRange;	// 16 = 0x10
}

+ (id)atomWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;	// IMP=0x0000000000a1bbab
- (void).cxx_destruct;	// IMP=0x0000000000a1bc43
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) struct _NSRange editRange; // @synthesize editRange=_editRange;
- (id)description;	// IMP=0x0000000000a1baf6
- (id)initWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;	// IMP=0x0000000000a1ba65

@end

