//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter
{
    NSString *_template;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000036d070
@property(copy, nonatomic) NSString *template; // @synthesize template=_template;
- (void)updateDateFormat;	// IMP=0x000000000036cfa5
- (id)notificationCenter;	// IMP=0x000000000036cf8c
- (id)initWithTemplate:(id)arg1;	// IMP=0x000000000036ce8a
- (void)dealloc;	// IMP=0x000000000036ce1c

@end

