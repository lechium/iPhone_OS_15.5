//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _PSSuggestion;

@interface _PSFeedbackAction : NSObject
{
    long long _type;	// 8 = 0x8
    _PSSuggestion *_suggestion;	// 16 = 0x10
    NSString *_transportBundleID;	// 24 = 0x18
}

+ (id)abandonment;	// IMP=0x00000000000b0fd9
+ (id)engagementWithSuggestion:(id)arg1 transportBundleID:(id)arg2;	// IMP=0x00000000000b0f1a
+ (id)engagementWithNonSuggestionWithEngagementIdentifier:(id)arg1;	// IMP=0x000000000008431e
- (void).cxx_destruct;	// IMP=0x00000000000b10d7
@property(readonly, copy, nonatomic) NSString *transportBundleID; // @synthesize transportBundleID=_transportBundleID;
@property(readonly, nonatomic) _PSSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 suggestion:(id)arg2 transportBundleID:(id)arg3;	// IMP=0x00000000000b1005

@end

