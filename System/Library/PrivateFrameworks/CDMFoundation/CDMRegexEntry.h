//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;

@interface CDMRegexEntry : NSObject
{
    NSRegularExpression *_regularExpression;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000300f8
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (id)initWithRegex:(id)arg1 label:(id)arg2;	// IMP=0x000000000003004b

@end

