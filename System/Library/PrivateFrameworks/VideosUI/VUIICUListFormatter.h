//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSListFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIICUListFormatter : NSListFormatter
{
    NSString *_style;	// 8 = 0x8
}

+ (id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2;	// IMP=0x00000000001accde
+ (id)localizedStringByJoiningStrings:(id)arg1;	// IMP=0x00000000001accba
- (void).cxx_destruct;	// IMP=0x00000000001acdf4
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
- (id)_stringFromStringArray:(id)arg1;	// IMP=0x00000000001acc0e
- (id)initWithLocale:(id)arg1 style:(id)arg2;	// IMP=0x00000000001acae0
- (id)initWithLocale:(id)arg1;	// IMP=0x00000000001acacb

@end

