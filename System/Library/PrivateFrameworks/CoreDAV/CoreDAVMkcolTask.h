//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask
{
    NSSet *_propertiesToSet;	// 48 = 0x30
    _Bool _sendOrder;	// 56 = 0x38
    int _absoluteOrder;	// 60 = 0x3c
    NSURL *_priorOrderedURL;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004982a
@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property(retain, nonatomic) NSSet *propertiesToSet; // @synthesize propertiesToSet=_propertiesToSet;
- (void)finishCoreDAVTaskWithError:(id)arg1;	// IMP=0x000000000004918c
- (id)copyDefaultParserForContentType:(id)arg1;	// IMP=0x0000000000049093
- (id)requestBody;	// IMP=0x0000000000048d54
- (id)additionalHeaderValues;	// IMP=0x0000000000048bab
- (id)httpMethod;	// IMP=0x0000000000048b9e
- (id)description;	// IMP=0x0000000000048981
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;	// IMP=0x0000000000048909
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000488f2

// Remaining properties
@property(nonatomic) __weak id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end

