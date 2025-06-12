struct OrderRequest
{
	int		something;
};

struct OrderConfirmation
{
	int		something;
};

int check_restaurant_status(struct OrderRequest *request);
struct OrderConfirmation *create_standard_confirmation(void);
struct OrderConfirmation *create_preorder_confirmation(void);
void send_confirmation_notification(struct OrderConfirmation *confirmation);
