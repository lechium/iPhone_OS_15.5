//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface HKInteractiveChartOverlayPredicate : NSObject
{
    NSPredicate *_predicate;	// 8 = 0x8
    NSString *_localizedNameKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000103239
@property(readonly, nonatomic) NSString *localizedNameKey; // @synthesize localizedNameKey=_localizedNameKey;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)initWithPredicate:(id)arg1 name:(id)arg2;	// IMP=0x000000000010318c

@end

